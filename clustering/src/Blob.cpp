#include "../headers/Blob.h"

Blob::Blob(){
    Point p(0,0);
    center = p;

    while (!pts.empty())
        pts.pop_back();

    x_min = 0;
    x_max = 10;
    y_min = 0;
    y_max = 10;
}

Blob::Blob(double center_x, double center_y, double min_x, double max_x, double min_y, double max_y){
    Point p(center_x, center_y);
    center = p;

    while (!pts.empty())
        pts.pop_back();

    x_min = min_x;
    x_max = max_x;
    y_min = min_y;
    y_max = max_y;
}

Blob::Blob(double min_x, double max_x, double min_y, double max_y) {
    double center_x = rng(min_x, max_x);
    double center_y = rng(min_y, max_y);

    Point p(center_x, center_y);
    center = p;

    while (!pts.empty())
        pts.pop_back();

    x_min = min_x;
    x_max = max_x;
    y_min = min_y;
    y_max = max_y;
}

Blob::Blob(double center_x, double center_y) {
    Point p(center_x, center_y);
    center = p;

    while (!pts.empty())
        pts.pop_back();

    x_min = 0;
    x_max = 10;
    y_min = 0;
    y_max = 10;
}

void Blob::make_blob_normal(double ecart, int nb_points){

    //on crée nb_points Points
    for (int i = 0; i < nb_points; i++){
        
        double tmp_x = 0;
        double tmp_y = 0;

        bool done = false;
        while (done != true) {
            tmp_x = rng_normal(center.get_x(), ecart);
            tmp_y = rng_normal(center.get_y(), ecart);

            if (    (tmp_x < x_max)     //test si  les pts sont dans les limites
                    && (tmp_x > x_min)
                    && (tmp_y < y_max)
                    && (tmp_y > y_min)
                )
                done = true;
        }        

        //quand on a trouver un couple [x,y], on push un Point(x, y) 
        //dans le vecteur contenant les points du blob
        pts.push_back( Point(tmp_x, tmp_y) );  
    }

}

void Blob::print(){
    
    std::cout << "center : " << std::endl;
    center.print();

    std::cout << "vector : " << std::endl;
    for (int i = 0; i<pts.size(); i++){
        pts.at(i).print();
    }
}

void Blob::draw() {
    for(int i = 0; i < pts.size(); i++) {
       
        std::vector<double> x = {pts.at(i).x};
        std::vector<double> y = {pts.at(i).y};
        
        plt::plot(x, y, {{"color", "black"}, {"marker", "x"}, {"linestyle", "none"}});
    
        x.pop_back();
        y.pop_back();
    }
    plt::show();
}

Blob::~Blob(){}