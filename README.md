# Point 2D i Point 3D
Klasa Point 2D reprezentuje punkt w dwuwymiarowej przestrzeni, natomiast klasa Point3D reprezentuje punkt w trójwymiarowej przestrzeni.

## Klasa Point 2D
Metody
Klasa Point zawiera następujące metody:

### Point()
Konstruktor, który tworzy nowy punkt o współrzędnych (0, 0).

### Point(double x)
Konstruktor, który tworzy nowy punkt o współrzędnych (x, x).

### Point(double x, double y)
Konstruktor, który tworzy nowy punkt o współrzędnych (x, y).

### double getX()
Metoda zwracająca wartość x punktu.

### double getY()
Metoda zwracająca wartość y punktu.

### void setX(double x)
Metoda ustawiająca wartość x punktu na podaną wartość.

### void setY(double y)
Metoda ustawiająca wartość y punktu na podaną wartość.

### void transX(double x)
Metoda przesuwająca punkt o wartość x w osi X.

### void transY(double y)
Metoda przesuwająca punkt o wartość y w osi Y.

### void transXY(double x, double y)
Metoda przesuwająca punkt o wartość x w osi X i wartość y w osi Y.

### void present()
Metoda wyświetlająca informacje o punkcie.

### static double dist(Point &one, Point &two)
Metoda statyczna zwracająca odległość między dwoma punktami.

## Klasa Point3D
Metody
Klasa Point3D dziedziczy po klasie Point i zawiera dodatkową metodę:

### Point3D()
Konstruktor, który tworzy nowy punkt o współrzędnych (0, 0, 0).

### Point3D(double x)
Konstruktor, który tworzy nowy punkt o współrzędnych (x, x, x).

### Point3D(double x, double y, double z)
Konstruktor, który tworzy nowy punkt o współrzędnych (x, y, z).

### void present()
Metoda wyświetlająca informacje o punkcie.

## Autor
Napisany przez Arkadiusz Kaźmierczak.
