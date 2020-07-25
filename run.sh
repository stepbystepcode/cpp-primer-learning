cppname=$1
outname=${cppname%.*}
outname=$outname".out"
g++ $cppname -o $outname -Wall
./$outname
