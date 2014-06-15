kip
===

simple library for c++

Setting up this example that uses kip
-------------------------------------

1.  Clone the repo
2.  make a directory *next* to src "mkdir build"
3.  cd into build
4.  cmake ../src
5.  to make an eclipse project

    ```
    cmake -G"Eclipse CDT4 - Unix Makefiles" -D CMAKE_BUILD_TYPE=Debug ../src
    ```

6.  to just make a regular make file

    ```
    cmake ../src
    ```

Look through the CMakeLists.txt file to see how you can make your 
own project that uses the kip library.
