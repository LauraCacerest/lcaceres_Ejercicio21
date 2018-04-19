bd1.png  gaus.png :  bdlineal.txt  gauss.txt
		python graficalineal.py
		python graficanolineal.py
bdlineal.txt: a.out
					./a.out > bdlineal.txt
gauss.txt : a.out
					./a.out > gauss.txt
a.out:
				c++ lcaceres_lineal.cpp
a.out:
				c++ lcaceres_nolineal.cp -o lcaceres_nolineal
