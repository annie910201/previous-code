n=['1';' ';'2';' ';' ';'3';' ';' ';' ';'4';' ';' ';' ';' ';'5';' ';' ';' ';' ';' ';'6';' ';' ';' ';' ';' ';' ';'7';' ';' ';' ';' ';' ';' ';' ';];
%會有' '是為了印空白
r=eye(35,1);
c=1;
for i=1:7;
    for j=0:i;
            r(c,1)=j;
            c=c+1;
    end
end
A1=HW5_produce_a(0.1);%HW5_produce_a:以HW5_1_a為基礎做的function，可以產生n從1~7的binomial probability sums
A2=HW5_produce_a(0.2);
A3=HW5_produce_a(0.25);
A4=HW5_produce_a(0.3);
A5=HW5_produce_a(0.4);
A6=HW5_produce_a(0.5);
A7=HW5_produce_a(0.6);
A8=HW5_produce_a(0.7);
A9=HW5_produce_a(0.8);
A10=HW5_produce_a(0.9);
%進行格式調整並使用for迴圈印出每一列的單一值
fprintf('                                              p                                         \n');
fprintf('        --------------------------------------------------------------------------------\n');
fprintf('n   r   0.10    0.20    0.25    0.30    0.40    0.50    0.60    0.70    0.80    0.90    \n');
fprintf('----------------------------------------------------------------------------------------\n');
for i=1:35;
    fprintf('%c\t%d\t%.4f  %.4f  %.4f  %.4f  %.4f  %.4f  %.4f  %.4f  %.4f  %.4f  \n',n(i,1),r(i,1),A1(i,1),A2(i,1),A3(i,1),A4(i,1),A5(i,1),A6(i,1),A7(i,1),A8(i,1),A9(i,1),A10(i,1));
    if(i==2||i==5||i==9||i==14||i==20||i==27)%換行判斷
        fprintf('\n');
    end
end

    