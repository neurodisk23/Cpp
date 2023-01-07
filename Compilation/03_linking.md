**Linking**


Linking is the process of creating an executable by effectively combining object files. During the linking process, the linker (the thing that does the linking) resolves symbolic references between object files and outputs a self-contained binary with all the machine code needed to execute.

As an aside, linking is not required for all programs. Most operating systems allow **dynamic linking**, in which symbolic references point to libraries that are not compiled into the resulting binary. With dynamic linking, these references are resolved at runtime. An example of this is a program that depends on a system library. At runtime, the symbolic references of the program resolve to the symbols of the system library.

There are pros and cons of dynamic linking. On the one hand, dynamically linked libraries are not linked within binaries, which keeps the overall file size down. However, if the library changes at any point, your code will automatically link to the new version. Like any changing dependency, difficult to fix and surprising bugs sometimes arise when versions change.

**Compiling to Executable with a Compiler**

Technically, you only need a compiler to compile C++ source code to a binary. A compiler does the dirty work of writing machine code for a given processor architecture. There are many compilers available. For this course, we picked the open source GNU Compiler Collection, more commonly called G++ or GCC. ```gcc``` is a command line tool.

There are two challenges with using ```gcc``` alone, both of which relate to the fact that most C++ projects are large. For one thing, you need to pass the paths for all of the project's source header files and cpp files to ```gcc```. This is in addition to any compiler flags or options. You can easily end up with single call to ```gcc``` that spans multiple lines on a terminal, which is unruly and error-prone.

Secondly, large projects will usually contain multiple linked binaries, each of which is compiled individually. If you're working in large project and only change one .cpp file, you generally only need to recompile *that one binary* - the rest of your project does not need to be compiled again! Compiling an entire project can take up to hours for large projects, and as such being intelligent about only compiling binaries with updated source code can save lots of time. GCC in and of itself is not smart enough to recognize what files in your project have changed and which haven't, and as such will recompile binaries needlessly - you'd need to manually change your ```gcc``` calls for the same optimizations. Luckily, there are tools that solve both of these problems!
