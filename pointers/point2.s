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
	pushl	%edi
	pushl	%esi
	subl	$80, %esp
	.cfi_offset %esi, -16
	.cfi_offset %edi, -12
	calll	L0$pb
L0$pb:
	popl	%eax
	leal	L_.str-L0$pb(%eax), %ecx
	movl	$5, -12(%ebp)
	movl	%ecx, (%esp)
	leal	-12(%ebp), %ecx
	movl	%ecx, 4(%esp)
	movl	%eax, -40(%ebp)         ## 4-byte Spill
	calll	_printf
	movl	-40(%ebp), %ecx         ## 4-byte Reload
	leal	L_.str.1-L0$pb(%ecx), %edx
	movl	-12(%ebp), %esi
	movl	%edx, (%esp)
	movl	%esi, 4(%esp)
	movl	%eax, -44(%ebp)         ## 4-byte Spill
	calll	_printf
	movl	-40(%ebp), %ecx         ## 4-byte Reload
	leal	L_.str.1-L0$pb(%ecx), %edx
	leal	-12(%ebp), %esi
	movl	%esi, -16(%ebp)
	movl	-16(%ebp), %esi
	movl	$7, (%esi)
	movl	-12(%ebp), %esi
	movl	%edx, (%esp)
	movl	%esi, 4(%esp)
	movl	%eax, -48(%ebp)         ## 4-byte Spill
	calll	_printf
	movl	-40(%ebp), %ecx         ## 4-byte Reload
	leal	L_.str.1-L0$pb(%ecx), %edx
	movl	-16(%ebp), %esi
	movl	%esi, -20(%ebp)
	leal	-12(%ebp), %esi
	movl	%esi, -24(%ebp)
	movl	-20(%ebp), %esi
	movl	$3, (%esi)
	movl	-12(%ebp), %esi
	movl	%edx, (%esp)
	movl	%esi, 4(%esp)
	movl	%eax, -52(%ebp)         ## 4-byte Spill
	calll	_printf
	movl	-40(%ebp), %ecx         ## 4-byte Reload
	leal	L_.str.1-L0$pb(%ecx), %edx
	movl	-24(%ebp), %esi
	movl	$11, (%esi)
	movl	-12(%ebp), %esi
	movl	%edx, (%esp)
	movl	%esi, 4(%esp)
	movl	%eax, -56(%ebp)         ## 4-byte Spill
	calll	_printf
	movl	-40(%ebp), %ecx         ## 4-byte Reload
	leal	L_.str.2-L0$pb(%ecx), %edx
	leal	-16(%ebp), %esi
	movl	%esi, -28(%ebp)
	movl	$228, -32(%ebp)
	leal	-32(%ebp), %esi
	movl	%esi, -36(%ebp)
	movl	-32(%ebp), %esi
	movl	%edx, (%esp)
	movl	%esi, 4(%esp)
	movl	%eax, -60(%ebp)         ## 4-byte Spill
	calll	_printf
	movl	-40(%ebp), %ecx         ## 4-byte Reload
	leal	L_.str.2-L0$pb(%ecx), %edx
	movl	-36(%ebp), %esi
	movl	(%esi), %edi
	shll	$1, %edi
	movl	%edi, (%esi)
	movl	-32(%ebp), %esi
	movl	%edx, (%esp)
	movl	%esi, 4(%esp)
	movl	%eax, -64(%ebp)         ## 4-byte Spill
	calll	_printf
	movl	-40(%ebp), %ecx         ## 4-byte Reload
	leal	L_.str.2-L0$pb(%ecx), %edx
	movl	-36(%ebp), %esi
	movl	-28(%ebp), %edi
	movl	%esi, (%edi)
	movl	-16(%ebp), %esi
	movl	$1234, (%esi)           ## imm = 0x4D2
	movl	-32(%ebp), %esi
	movl	%edx, (%esp)
	movl	%esi, 4(%esp)
	movl	%eax, -68(%ebp)         ## 4-byte Spill
	calll	_printf
	xorl	%ecx, %ecx
	movl	%eax, -72(%ebp)         ## 4-byte Spill
	movl	%ecx, %eax
	addl	$80, %esp
	popl	%esi
	popl	%edi
	popl	%ebp
	retl
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%p\n"

L_.str.1:                               ## @.str.1
	.asciz	"%d\n"

L_.str.2:                               ## @.str.2
	.asciz	"superval: %d\n"


.subsections_via_symbols
