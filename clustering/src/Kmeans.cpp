#include "../headers/Kmeans.h"

Kmeans::Kmeans(){
    while (!pts.empty())
        pts.pop_back();

    while (!centroid.empty())
        centroid.pop_back();
}

Kmeans::Kmeans(std::vector<Point> PTS){
    while (!centroid.empty())
        centroid.pop_back();

    pts = PTS;
}

void Kmeans::clustering(){

    for (int i = 0; i < pts.size(); i++) { //boucle des pts
        
        pts.at(i).cluster = 0;
        if (centroid.size() > 1) {
            
            for (int j = 1; j < centroid.size(); j++) { //boucle des centres
                
                //si le le pt est plus proche du centre testé
                if (    
                        pts.at(i).distance(centroid.at(j)) 
                        < pts.at(i).distance(centroid.at(pts.at(i).cluster))
                    ) {
                    
                    pts.at(i).cluster = j;
                }
            }    
        }
    }
}

void Kmeans::center_centroids(){

    if (centroid.size() > 1) {
        for (int i = 0; i < centroid.size(); i++) { //boucle des centroids
          
            double new_x = 0;
            double new_y = 0;
            double count = 0;

            for (int j = 0; j < pts.size(); j++) { //boucle des pts
                if (pts.at(j).cluster == i) { //si le pt appartient au cluster
                    count += 1;
                    new_x += pts.at(j).get_x();
                    new_y += pts.at(j).get_y();
                }
            }

            if (count != 0) {
                new_x = new_x / count;
                new_y = new_y / count;
                centroid[i].x = new_x;
                centroid[i].y = new_y;
            }
        }
    }
}

void Kmeans::run(int nb_centers){

    //init centroid
    for (int i = 0; i < nb_centers; i++) {
        centroid.push_back(Point( pts[i].get_x(), pts[i].get_y() ) );
    }

    bool done = false;

    while (done != true) {

        std::vector<Point> old_centroid = centroid;

        clustering();
        center_centroids();
 
        //si tout les centres sont égaux aux précédents => end
        int sum = 0;
        for (int i = 0; i < nb_centers; i++) {
            if (    abs( centroid.at(i).x - old_centroid.at(i).x ) < 0.0001
                    &&  abs ( centroid.at(i).y - old_centroid.at(i).y ) < 0.0001 
                ) {
                sum += 1;
            }
        }

        if (sum == nb_centers) {
            done = true;    
        }
    }
}

void Kmeans::draw_pts_vec() {

    std::vector<std::string> COLORS { //liste des couleurs dispo
        "red",
        "orange",
        "lime",
        "cyan",
        "blue",
        "darkviolet",
        "magenta",
        "pink"
    };

    for(int i = 0; i < pts.size(); i++) {
       
        std::vector<double> x = {pts.at(i).x};
        std::vector<double> y = {pts.at(i).y};
        
        std::string color = "black";
        if (pts.at(i).cluster >= 0) 
            color = COLORS[ pts.at(i).cluster %  COLORS.size()] ;
        
        plt::plot(x, y, {{"color", color}, {"marker", "."}, {"linestyle", "none"}});
    
        x.pop_back();
        y.pop_back();
    }
    plt::show();
}

Kmeans::~Kmeans() {}