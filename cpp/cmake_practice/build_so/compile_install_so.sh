shopt -s extglob
cmake ../so && make && make install && rm -rf -- !(compile_install_so.sh)
