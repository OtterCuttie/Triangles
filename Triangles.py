print('Введите три угла')
a = input(int())
b = input(int())
c = input(int())

if( a == b or a == c or c == b):
    print('Равнобедренный треуголтник')
    if (a == b and a == c and b == c):
        print('Равноcтороний треуголтник')

elif (a == 90 or b == 90 or c == 90):
    print('Прямоугольный треуголтник')

elif (a == b or a == c or c == b):
    print('Равнобедренный треуголтник')

elif (a == b and a == c and b == c):
    print('Равносторонний треугольник')

elif (a+b+c != 180 ):
    print('Треугольник не получается')

elif ( a<0 or c < 0 or b < 0):
    print('Треугольник не получается')

elif (a == 180 or c == 180 or b == 180):
    print('Треугольник не получается')

elif (a > 180 or c > 180 or b > 180):
    print('Треугольник не получается')
else:
    print('Введите нормально числа')
