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
chmod +w RemoveMeeee

reset
option + left click


export MODULEPATH=$MODULEPATH:/home/u2427862/
source ~/.bashrc
module load donut
