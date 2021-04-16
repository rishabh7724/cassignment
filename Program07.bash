echo "Enter the number to check Armstrong : "
read number

temp=number
n=0
while [ $temp -eq 0 ]
do 
    n=`expr $n + 1`
    temp=`expr $temp / 10`
done
echo $n
