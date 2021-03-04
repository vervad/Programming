import random
identifier = 1
number = random.randint(0,100)
while identifier == 1:
    print ("Угадайте число!")
    for i in range (1,6):
	attempt = int(input())
	if attempt == number: 
	    print ("Поздравляю! Вы угадали! Хотите начать сначала ? (1 - ДА)")
	    identifier = int(input())
	    break
	else: 
	    if i == 5:
		print("Вы проиграли. Было загадано: ", number, " Хотите начать сначала ? (1 - ДА; 2 - НЕТ)")
		identifier = int(input())
		if identifier == 2:
		    print ("Удачного дня!")
	    elif number > attempt: 
		    print ("Загаданное число больше")
	    elif number < attempt:
		    print ("Загаданное число меньше")
