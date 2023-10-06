shopt -s extglob
cmake ../src && make && make install && rm -rf -- !(compile_install_exec.sh)

cat << EOF > ../install_exec/run_exec.sh
export DYLD_LIBRARY_PATH=../install_so/
./cpp_entry_main
EOF

chmod u+x ../install_exec/run_exec.sh
