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

#include <cstdlib>
#include <cstdio>
#include <vector>
#include "lodepng.h"

class VideoFrame
{
private:
    int width;
    int height;
    std::vector<unsigned char> buffer;

public:
    VideoFrame(int _width, int _height)
        : width(_width)
        , height(_height)
        , buffer(4 * _width * _height)
        {}

    
};

static int PrintUsage();
static int GenerateZoomFrames(const char *outdir, int numsteps, double xcenter, double ycenter, double zoom);

int main(int argc, const char *argv[])
{
    if (argc == 6)
    {
        const char *outdir = argv[1];
        int numsteps = atoi(argv[2]);
        if (numsteps < 1)
        {
            fprintf(stderr, "ERROR: Invalid number of steps on command line.\n");
            return 1;
        }
        double xcenter = atof(argv[3]);
        double ycenter = atof(argv[4]);
        double zoom = atof(argv[5]);
        if (zoom < 1.0)
        {
            fprintf(stderr, "ERROR: zoom factor must be 1.0 or greater.\n");
            return 1;
        }
        return GenerateZoomFrames(outdir, numsteps, xcenter, ycenter, zoom);
    }

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

static int GenerateZoomFrames(const char *outdir, int numsteps, double xcenter, double ycenter, double zoom)
{
    VideoFrame frame(1280, 720);    // create a video frame with 720p resolution
    return 1;
}
