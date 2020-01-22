#include <vector>
#include <chrono>
#include "matplotlibcpp.h"

#include "../headers/Point.h"
#include "../headers/Blob.h"
#include "../headers/Kmeans.h"

namespace plt = matplotlibcpp;

int main(int argc, char const *argv[])
{   
    //création de blobs
    Blob b1(14.8, 60.8, 0.0, 100.0, 0.0, 100.0);
    Blob b2(51.4, 81.6, 0.0, 100.0, 0.0, 100.0);
    Blob b3(68.3, 21.4, 0.0, 100.0, 0.0, 100.0);

    //génération de blobs normalisés
    b1.make_blob_normal(10, 10);
    b2.make_blob_normal(10, 10);
    b3.make_blob_normal(10, 10);

    //création du data set
    std::vector<Point> pts;
    pts.insert(pts.end(), b1.pts.begin(), b1.pts.end());
    pts.insert(pts.end(), b2.pts.begin(), b2.pts.end());
    pts.insert(pts.end(), b3.pts.begin(), b3.pts.end());


    Kmeans K (pts);

    auto start1 = std::chrono::steady_clock::now();
    K.run(3);
    auto end1 = std::chrono::steady_clock::now();
    auto time1 = end1-start1;
    
    std::cout << std::chrono::duration <double, std::nano> (time1).count() << std::endl;
    
    K.draw_pts_vec();    

    return 0;
}
