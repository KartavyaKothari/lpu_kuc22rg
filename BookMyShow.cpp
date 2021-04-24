#include<bits/stdc++.h>
using namespace std;

// class User{
//     string name;
//     int age;
// };

class Movie{
    string name;
    double imdb;
    bool is_adult;
    // string cast[2];

    public:
    Movie(string n, double i, bool is_a):
        name(n),
        imdb(i),
        is_adult(is_a)
    {}

    void display(){
        cout<<name<<", "<<(is_adult?"(A)":"(UA)")<<", IMDB: "<<imdb<<endl;
    }
};

class Theatre{
    string name;
    string location;

    public:
    Theatre(string name, string location){
        this->name = name;
        this->location = location;
    }

    void display(){
        cout<<name<<", "<<location<<endl;
    }
};

class Ticket{
    Movie *m;
    Theatre *t;

    public:
    Ticket(Movie *m, Theatre *t):t(t),m(m){}

    void display(){
        m->display();
        t->display();
    }
};

class BookMyShow{
    Movie *movies[3];
    Theatre *theatres[3];
    Ticket *tickets[100];
    int last_ticket_idx;

    public:
    BookMyShow(){
        movies[0] = new Movie("Deadpool",8.6,true);
        movies[1] = new Movie("Endgame",8.1,false);
        movies[2] = new Movie("Logan",8.9,true);

        theatres[0] = new Theatre("Cinepolis","Mumbai");
        theatres[1] = new Theatre("Maxus","Jaipur");
        theatres[2] = new Theatre("IMAX","Udaipur");

        last_ticket_idx = -1;
    }

    void show_welcome_screen(){
        int movie;
        int theatre;

        bool is_continue = true;
        while(is_continue){
            show_main_menu_options();
            switch(get_res()){
                case 1:
                    //Show movie lists
                    show_movie_list();
                    movie = get_res();

                    show_theatre_list();
                    theatre = get_res();

                    create_booking(movies[movie-1],theatres[theatre-1]);
                    break;
                case 2:
                    show_ticket_list();
                    break;
                case 3:
                    //Exit
                    is_continue = false;
                    break;
            }
        }
    }

    void show_main_menu_options(){
        cout<<"1. Book a movie"<<endl;
        cout<<"2. Check your bookings"<<endl;
        cout<<"3. Exit"<<endl;
    }

    void show_movie_list(){
        for(int i = 0 ; i < 3 ; i++){
            //display movies[i]
            cout<<(i+1)<<". ";
            movies[i]->display();
        }
    }

    void show_theatre_list(){
        for(int i = 0 ; i < 3 ; i++){
            //display movies[i]
            cout<<(i+1)<<". ";
            theatres[i]->display();
        }
    }

    void create_booking(Movie *m, Theatre *t){
        last_ticket_idx++;
        tickets[last_ticket_idx] = new Ticket(m,t);
    }

    void show_ticket_list(){
        for(int i = 0 ; i <= last_ticket_idx ; i++){
            // cout<<(i+1)<<". ";
            cout<<"======================="<<endl;
            tickets[i]->display();
            cout<<"======================="<<endl;
        }
    }

    int get_res(){
        cout<<"Response: ";
        int res;
        cin>>res;
        return res;
    }
};

int main(){
    BookMyShow bms;
    bms.show_welcome_screen();
    cout<<"Thanks for using my app"<<endl;

    return 0;
}