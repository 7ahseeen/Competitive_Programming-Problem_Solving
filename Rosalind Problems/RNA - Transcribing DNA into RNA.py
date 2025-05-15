inpFile = open("rosalind_rna.txt", 'r')

seq = inpFile.read()

stlen = len(seq)

seq = list(seq)

for i in range (0, stlen):
    if seq[i] == 'T':
        seq[i] = 'U'
        
seq = "".join(seq)

print(seq)

inpFile.close()