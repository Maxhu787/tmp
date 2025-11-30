for i in {1..20}; do omp-judge && rm ~/.config/last_sb; sleep 7; done


#include <assert.h>
#include <stdio.h>
#include <math.h>
#include <omp.h>

// #pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

int main(int argc, char** argv) {
 // if (argc != 3) {
 //  fprintf(stderr, "must provide exactly 2 arguments!\n");
 //  return 1;
 // }
 unsigned long long r = atoll(argv[1]);
 unsigned long long rr = r*r;
 unsigned long long k = atoll(argv[2]);
 unsigned long long pixels = 0;
 unsigned long long go = (unsigned long long)((double(r)) / sqrt(2.0));

 #pragma omp parallel reduction(+:pixels)
 {
  unsigned long long local_pixels = 0;

  #pragma omp for schedule(static)
  for (unsigned long long x = 0; x < go; ++x) {
   unsigned long long haha = rr - x*x;
   unsigned long long y = (unsigned long long)(sqrt(haha));
   if (y*y < haha) ++y;
   // y += (y*y - haha)>>63;
   local_pixels += y - x - 1;
   // if (local_pixels > k) local_pixels -= k;
  }

  pixels += local_pixels % k;
 }
 unsigned long long haha = rr - go*go;
 unsigned long long y = (unsigned long long)(sqrt(haha));
 if (y*y < haha) ++y;
 unsigned long long diagonal =  y + (y - go - 1);
 printf("%llu\n", (pixels*8 + diagonal*4) % k);
}