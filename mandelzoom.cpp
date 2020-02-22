/*
    mandelzoom.cpp

    MIT License

    Copyright (c) 2019 Don Cross <cosinekitty@gmail.com>

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:
    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.
    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.
*/

#include <cstdio>

static int PrintUsage();

int main(int argc, const char *argv[])
{
    return PrintUsage();
}


static int PrintUsage()
{
    fprintf(stderr, 
        "\n"
        "USAGE:\n"
        "\n"
        "mandelzoom outdir numsteps xcenter ycenter zoom\n"
        "    outdir   = directory to receive output PNG files.\n"
        "    numsteps = integer number of frames in the video.\n"
        "    xcenter  = the real component of the zoom center point.\n"
        "    ycenter  = the imaginary component of the zoom center point.\n"
        "    zoom     = the magnification factor of the final frame.\n"
        "\n"
    );

    return 1;
}
