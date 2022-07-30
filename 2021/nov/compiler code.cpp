pallab@acer-nitro:~$ g++ fork2.cpp -o fork2
bash: ./fork2.cpp: Permission denied
pallab@acer-nitro:~$ chmod +x fork2.cpp
pallab@acer-nitro:~$ ./fork2.cpp

pallab@acer-nitro:~$ g++ lab2.cpp -o lab2
pallab@acer-nitro:~$ ./lab2.cpp



Enter the maximum range of Disk:200 
Enter the number of queue requests:5 
Enter the initial head position:60 
Enter the disk positions to be read(queue):90 
40 167 75 31 207
Disk head moves from position 60 to 75 with Seek 15 
Disk head moves from position 75 to 90 with Seek 15 
Disk head moves from position 90 to 167 with Seek 77 
Disk head moves from position 167 to 200 with Seek 33 
Disk head moves from position 200 to 40 with Seek 160 
Disk head moves from position 40 to 31 with Seek 9 
Total Seek Time= 309
Average Seek Time= 61.799999