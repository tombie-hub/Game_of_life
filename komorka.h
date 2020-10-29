#ifndef KOMORKA_H
#define KOMORKA_H


class komorka
{
    public:
        komorka();
        virtual ~komorka();
        void setStan(bool);
        bool getStan();

    private:

        bool stan;
};

#endif // KOMORKA_H
