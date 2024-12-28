int count;
/*
Bunu global yapınca storage olarak static oluyor ve degeri fonksyon yok olunca gitmiyor böylece takip edebiliyoruz.
*/
int increment(void)
{
    count = count + 1;

    return count;
}