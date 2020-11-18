	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 10, 15	sdk_version 10, 15
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset %ebp, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register %ebp
	subl	$12, %esp
	xorl	%eax, %eax
	movl	$3, -4(%ebp)
	movl	$5, -8(%ebp)
	movl	-4(%ebp), %ecx
	addl	-8(%ebp), %ecx
	movl	%ecx, -12(%ebp)
	addl	$12, %esp
	popl	%ebp
	retl
	.cfi_endproc
                                        ## -- End function

.subsections_via_symbols
