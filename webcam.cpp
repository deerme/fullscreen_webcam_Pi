#include <stdio.h>
#include <unistd.h>
//#include "camera.h"
//#include "graphics.h"
#include <time.h>
#include <curses.h>
#include <opencv2/core/core_c.h>
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>


int main(int argc, const char **argv)
{
        //init graphics and the camera
        //InitGraphics();
        //CCamera* cam = StartCamera(MAIN_TEXTURE_WIDTH, MAIN_TEXTURE_HEIGHT,15,1,false);


//init webcam
CvCapture *capture = 0;
IplImage  *frame = 0;
int       key = 0;
cv::Mat original;
/* initialize camera */
    capture = cvCaptureFromCAM(0);
cvSetCaptureProperty(capture, CV_CAP_PROP_FRAME_WIDTH, 320);
    cvSetCaptureProperty(capture, CV_CAP_PROP_FRAME_HEIGHT, 240);
    cvSetCaptureProperty(capture, CV_CAP_PROP_FPS, 30);
    /* always check */
    if ( !capture ) {
        fprintf( stderr, "Cannot open initialize webcam!\n" );
        return 1;
    }
//end webcam

//creo frame
original = cvQueryFrame(capture);

}
