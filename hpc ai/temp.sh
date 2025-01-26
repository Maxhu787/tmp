ssh -XY u2427862@f1-ilgn01.nchc.org.tw 
aS7778524278


wget "https://hpcai2024-ctfd.yikuo.dev/files/a64a42bac23a8f3ef41a18ed5f92d58e/1_1_lab1.tar.gz?token=eyJ1c2VyX2lkIjoxNjAsInRlYW1faWQiOm51bGwsImZpbGVfaWQiOjR9.Z5CBvA.PBpWpR4rkgQ1fckJvk9V34kcdZE" -O 1_1_lab1.tar.gz
tar -xvzf 1_1_lab1.tar.gz
find 1-1_lab1 -type f -executable

rsync -avz stmv.tpr.zip u2427862@f1-ilgn01.nchc.org.tw:/home/2427862/

which python3
mkdir -p ~/.pkg/bin
ln -s /usr/bin/python3 ~/.pkg/bin/py
ls -l ~/.pkg/bin/py
nano ~/.bashrc
export PATH="$HOME/.pkg/bin:$PATH"
source ~/.bashrc
py

python3 -m venv npy
source npy/bin/activate
pip install numpy
pip freeze > requirements.txt
deactivate

module spider
module load tools/miniconda3
conda create --name npy python=3.8
conda activate npy
pip3 install numpy

ls -ld RemoveMeToo
chmod u+x RemoveMeToo
chmod +w RemoveMeeeec

reset
option + left click

export MODULEPATH=$MODULEPATH:$PWD
source ~/.bashrc
module load donut

vtune-gui

ls */*.vtune

vtune-hpc-a/vtune-hpc-a.vtune
scp "u2427862@140.110.122.196:/home/u2427862/HPC-Winter-Camp-Profiling/*html" .

nano ~/.bashrc
alias sb='sbatch'
alias sc='scancel'
alias qq='squeue -u $USER'
source ~/.bashrc

rm HPL.dat && nano HPL.dat

https://docs.google.com/presentation/d/1eszPGZRidEEGpRxEL1WeWWNj8mXtNKhyUNygXJq_bFY/edit#slide=id.g327cc0f83d5_0_16








ncpus=4
r=2147483647
k=2147483647
answer=256357661
timelimit=10


ncpus=2
r=5
k=100
answer=88
timelimit=3


#include <assert.h>
#include <stdio.h>
#include <math.h>
#include <omp.h>

int main(int argc, char** argv) {
        if (argc != 3) {
                fprintf(stderr, "must provide exactly 2 arguments!\n");
                return 1;
        }

        unsigned long long r = atoll(argv[1]);
        unsigned long long k = atoll(argv[2]);
        unsigned long long pixels = 0;

        #pragma omp parallel
        {
            unsigned long long local_pixels = 0;

            #pragma omp for
            for (unsigned long long x = 0; x < r; x++) {
                unsigned long long y = ceil(sqrtl(r * r - x * x));
                local_pixels += y;
                local_pixels %= k; // Modulo to prevent overflow
            }

            #pragma omp atomic
            pixels += local_pixels;
        }

        pixels %= k; // Final modulo operation
        printf("%llu\n", (4 * pixels) % k);
}