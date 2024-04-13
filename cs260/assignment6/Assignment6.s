# ----------------------------------------------------------------------------------------
# Find the maxmum value among three. Runs on 64-bit Linux only.
# To assemble and run:
#
#     gcc -c Assignment7.s && ld Assignment7.o && ./a.out
#
# or
#
#     gcc -nostdlib Assignment7.s && ./a.out
# ----------------------------------------------------------------------------------------

        .global _start

        .text
_start:
        # write your program below
                mov $4, %rbx
                mov $34, %rcx
                mov $43, %rdx
                cmp %rcx, %rbx # a - b
                jl _Asmall
                cmp %rdx, %rbx # a - c
                jl _returnC
                jmp _returnA
		jmp _Exit
_Asmall:        
                cmp %rdx, %rcx # b - c
                jg _returnB
                jmp _returnC
_returnA:	
                movq %rbx, %rax
		jmp _Exit
_returnB:	
                movq %rcx, %rax
		jmp _Exit
_returnC:	
                movq %rdx, %rax
		jmp _Exit
		
		# write your program above

_Exit:  # exit(0)
        mov     $60, %rax               # system call 60 is exit
        xor     %rdi, %rdi              # we want return code 0
        syscall                         # invoke operating system to exit


