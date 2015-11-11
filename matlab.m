arduin=serial('COM3','BaudRate',9600);
fopen(arduin);
CM(1)=0;
time(1)=0;
x=[-0.5 0.5 0.5 -0.5; -1 -1 1 1];
tic;
while (toc<=20)  
    theta=fscanf(arduin,'%f');
 th= -pi*theta/180;
xn=[cos(th) -sin(th); sin(th) cos(th)]*x;
figure(1)
xx=fill(xn(1,:),xn(2,:), 'r');
axis([-2, 2, -2, 2])
end
fclose(arduin); 


