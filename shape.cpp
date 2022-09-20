#include <iostream>
#include "shape.h"

std::string box(int width, int length){
    std::string str;
    for(int i = 0; i < length; i++){
        for(int j = 0; j < width; j++){
            str += "*";
        }
        str += "\n";
    }
    return str;
}

std::string checkerboard(int width, int length){
    std::string str;
    for(int i = 0; i < length; i++){
        for(int j = 0; j < width; j++){
            if(i % 2 == 0 && j % 2 == 0 || i % 2 == 1 && j % 2 == 1){
                str += "*";
            }
            else {
                str += " ";
            }
        }
        str += "\n";
    }
    return str;
}

std::string cross(int length){
    std::string str;
    for(int i = 0; i < length; i++){
        for(int j = 0; j < length; j++){
            if(j == i || j == length - (i + 1)){
                str += "*";
            }
            else {
                str += " ";
            }
        }
        str += "\n";
    }
    return str;
}

std::string lower(int length){
    std::string str;
    for(int i = 0; i < length; i++){
        for(int j = 0; j <= i; j++){
            str += "*";
        }
        str += "\n";
    }
    return str;
}

std::string upper(int length){
    std::string str;
    for(int i = length; i > 0; i--){
        for(int k = 0; k < length - i; k++){
            str += " ";
        }
        for(int j = 0; j < i; j++){
            str += "*";
        }
        str += "\n";
    }
    return str;
}

std::string trapezoid(int width, int height){
    if(width % 2 == 1 && height * 2 > width + 1 || width % 2 == 0 && height * 2 > width){
        return "Impossible shape";
    }
    std::string str;
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width - i; j++){
            if(j < i){
                str += " ";
            }
            else {
                str += "*";
            }
        }
        str += "\n";
    }
    return str;
}

std::string checkerboard3x3(int width, int height){
    std::string str;
    bool space = false;
    for(int i = 0; i < height; i++){
        if(i % 6 == 3 || i % 6 == 0){
            space = !space;
        }
        for(int j = 0; j < width; j++){
            if(j % 6 == 3 || j % 6 == 0){
                space = !space;
            }
            if(!space){
                str += "*";
            }else {
                str += " ";
            }
        }
        if(width % 6 == 3 || width % 6 == 0){
                space = !space;
        }
        str += "\n";
    }

    return str;
}
