BEGIN{print "Record \t Characters \t Words"}
#BODY section
{
len=length($0)
total_len =len
print(NR,"\t\t:\t",len,"\t\t:\t",NF,"\n"$0)
words =NF
}
END{
print("\nTotal")
print("Characters:\t" total len)
print("Lines:\t" NR)
}