@echo off

set "curpath=%cd%"

call "%PROGRAMFILES(x86)%\Microsoft Visual Studio\2017\Community\VC\Auxiliary\Build\vcvarsall.bat" x64

cd %curpath%
