#######################################################################
#                          Import Sistem
#######################################################################
import os

#######################################################################
#                          MODULE UTAMA
#######################################################################
top  	= "alu" # Ganti sesuai nama module yang akan di kompile

#######################################################################
#                    	MAIN PROSES (JANGAN GANTI)
#######################################################################
dir  	= "./module/selesai/"
file 	= "cmp.ys"
target  = "alu.v"
liberty = "lib/simple.lib"
compiled= "cmp.v"
def read():
	x=0
	out  = open(file,"w")
	rtl_files = os.listdir(dir)
	"""
	while(x<len(rtl_files)):
		print(rtl_files[x])
		out.write("read_verilog " + dir + rtl_files[x] + "\n")
		x+=1
	"""
	out.write("read_verilog " + dir + target + "\n")
	out.write("hierarchy -check -top "+top+"\n")
	out.write("proc; opt; memory; fsm; opt\n")
	out.write("techmap; opt\n")
	out.write("dfflibmap -liberty "+liberty+"\n")
	out.write("abc -liberty "+liberty+"\n")
	out.write("clean\n")
	out.write("write_verilog -norename -noattr "+compiled+"\n")
	#out.write("dffsr2dff\n")
	out.close()
	os.system("yosys " + file)
if __name__ == "__main__":
	read()
