class Carro {
    private:
        int ano;
        float velocidade, preco;
    
    public:
        Carro( int a, float km, float v);

        void setano( int a);
        int getano();

        void setpreco( float v);
        float getpreco();
        
        void setvelocidade( float km);
        float getvelocidade();

};