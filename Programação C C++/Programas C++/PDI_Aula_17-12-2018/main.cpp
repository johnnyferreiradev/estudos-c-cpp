#include <QCoreApplication>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(){

    int i, j;
    Mat img, img2;
    img = imread("/home/johnny/Documents/Sistemas de Informação/S4/Precessamento Digital de Imagens/Aula1_PDI.png",0);
    img2 = img.clone();

    for(i=0; i<img.rows; i++){
        for(j=0; j<img.cols; j++){
            if(i%2==0 && j%2==0){
                img.at<uchar>(i,j) = 255;
            }
        }
    }

    namedWindow("tela2");
    namedWindow("tela");

    imshow("tela",img);
    imshow("tela2", img2);

    waitKey(0);

    return 1;
}
