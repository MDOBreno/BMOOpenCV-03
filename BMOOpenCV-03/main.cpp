//
//  main.cpp
//  BMOOpenCV-03
//
//  Created by Breno Medeiros on 28/03/20.
//  Copyright © 2020 ProgramasBMO. All rights reserved.
//

#include <opencv2/opencv.hpp>

using namespace cv;

int main(int argc, const char * argv[]) {
    // insert code here...
    String caminho = "/Users/brenomedeiros/Documents/ProgramasBMO/Cpp/BMOOpenCV-03/BMOOpenCV-03/";
    String caminhoImagens = "/Users/brenomedeiros/Documents/ProgramasBMO/Cpp/BMOOpenCV-03/BMOOpenCV-03/Images/";
    
    Mat arquivo1 = imread(caminhoImagens+"Me.jpeg", CV_LOAD_IMAGE_UNCHANGED);
    Mat arquivo2 = imread(caminhoImagens+"Me.jpeg", CV_LOAD_IMAGE_GRAYSCALE);
    
    namedWindow("Cor", CV_WINDOW_FREERATIO);        // Windows: Deveria dar para esticar a imagem a vontade.
    namedWindow("Consertado", CV_WINDOW_AUTOSIZE);  // Windows: Deveria ser impossiver redimensionar a janela.
    // Mac: Na pratica da pra redimensionar nos dois casos a cima, e em enhums dele se perde a proporcao.
    
    imshow("Cor", arquivo1);
    imshow("Consertado", arquivo2);
    
    resizeWindow("Cor", arquivo1.cols, arquivo1.rows);              // Mac: Não muda nada
    resizeWindow("Consertado", arquivo2.cols/2, arquivo2.rows/2);   // Mac: Não muda nada
    
    // Escolhe/Move a posicao em que as janelas aparecem
    moveWindow("Cor", 200, 1080);
    moveWindow("Consertado", 200+arquivo1.cols, 1080);
    
    
    waitKey();
    
    return 0;
}
