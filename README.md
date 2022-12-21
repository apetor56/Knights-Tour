# Knight's Tour visualisation
### A knight's tour is a sequence of moves of a knight on a chessboard such that the knight visits every square exactly once and knight's tour problem is graph theory problem of finding such a path. In this program I used Warnsdorff's heuristic for finding a single knight's tour. More usefull information [here](https://bradfieldcs.com/algos/graphs/knights-tour/).
---
## Content
- `include` - contains header files for OpenGL and algorithm source codes,
- `lib` - consist of:
    - `src` - source code files for libraries,
    - `CMakelist.txt` - used to build libraries
- `shaders` - shaders programs in GLSL,
- `src` - implementation of algorithm and graphical content,
- `tex` - knight texture,
- `CMakeLists.txt` - top level CMakelist, used to build main program,
- `setup.sh` - build whole project

Additionally `.vscode` contains files for debugging and build task.

## Prerequisites
- `cmake` - version 3.4 or higher,
- c++ compilator for at least c++11 standard,
- graphics card supporting OpenGL in version 4.3 (almost all graphics card nowaday)

## Installation
### Windows:
1. Clone repository with `--recursive` option:

    `git clone https://github.com/apetor56/Knights-Tour.git --recursive`

2. Navigate to root folder and in terminal add executable permission for setup script:

    `chmod +x setup.sh`

3. Run script:

    `./setup.sh`

4. Navigate to `Knights-Tour/bin` directory and run program:
   
   `cd ./bin`<br>
   `./main.exe`

<br>
<img src="https://github.com/apetor56/Knights-Tour/blob/master/Animation.gif" width="550" height="550"/>