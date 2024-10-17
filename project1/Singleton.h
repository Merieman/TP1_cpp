
class Singleton
{
private:
    int id;
    static Singleton* instance;
    Singleton();
    Singleton(int id);
    Singleton(const Singleton&) = delete;
    Singleton& operator =(const Singleton&) = delete;
public:
    static Singleton& createur();
    ~Singleton();



};


