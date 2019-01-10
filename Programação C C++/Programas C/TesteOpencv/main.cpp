#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>

using namespace std;

int main()
{
    Mat img = imread("/home/johnny/Pictures/img.jpg", 1);

    if(img!=empty){
        cout << "sem imagem";
    }

    namedWindow("tela");
    imshow("tela", img);
    waitKey(0);
    destroyAllWindows;

    return 0;
}
