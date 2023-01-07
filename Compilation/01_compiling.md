**Compiling**


Compiling is the process of translating the code that you've written into machine code that processors understand. Every program, regardless of the source language, needs to be compiled in order to execute. This is true even for scripting languages like Python or JavaScript. In these cases, the interpreter (or a similar system) is responsible for compiling code on the fly in a process known as [just-in-time compiling](https://en.wikipedia.org/wiki/Just-in-time_compilation). To the user, compilation and execution of scripting languages are effectively a single action. (Of course, the actual process of compiling code at run-time is much more complicated than what was described here in one sentence. It's also very much dependent on the exact language and runtime in question.)

Unlike scripted languages, compiled languages treat compilation and execution as two distinct steps. Compiling a program leaves you with an [executable](https://en.wikipedia.org/wiki/Executable) (often called a "binary"), a non-human readable file with machine code that the processor can run.

The nice thing about binaries is that they're generally distributable. So long as it was built with the right architecture in mind, you can copy an executable and run it immediately on other machines (like downloading a ```.exe``` file on Windows) without any need to share your source code or have the user perform any intermediate tasks before execution.

There are many tools available to help you compile, ranging from barebones tools, such as ```g++``` on Unix, to complex build systems that are integrated into IDEs like Visual Studio and Eclipse.

There is a high-level build tool called **CMake** that is fairly popular and cross-platform. CMake in and of itself, however, does not compile code. CMake results in compilation configurations. It depends on a lower-level build tool called **Make** to *manage* compiling from source. And then Make depends on a compiler to do the actual compiling.
