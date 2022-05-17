#include "../libc/terminal_driver.h"

#if defined(__linux__)
#error "Use a cross compiler"
#endif

#if !defined(__i386__)
#error "This needs to be compiled with a ix86-elf compiler"
#endif

void kernel_main(void)
{
	/* Initialize terminal interface */
	terminal_initialize();

	print("Sub to \"dont mind my accent\"!\n");
	print("Hello to my os\n");
	print("Test\n");
	print("Never gonna give up\nNever gonna run around and desert you!");
	print("Sub to \"dont mind my accent\"!\n");
	print("Hello to my os\n");
	print("Test\n");
	print("Never gonna give up\nNever gonna run around and desert you!");
	print("Sub to \"dont mind my accent\"!\n");
	print("Hello to my os\n");
	print("Test\n");
	print("Never gonna give up\nNever gonna run around and desert you!");
	print("Sub to \"dont mind my accent\"!\n");
	print("Hello to my os\n");
	print("Test\n");
	print("Never gonna give up\nNever gonna run around and desert you!");
	print("Sub to \"dont mind my accent\"!\n");
	print("Hello to my os\n");
	print("Test\n");
	print("Never gonna give up\nNever gonna run around and desert you!");
	print("Sub to \"dont mind my accent\"!\n");
	print("Hello to my os\n");
	print("Test\n");
	print("Never gonna give up\nNever gonna run around and desert you!");
	print("Sub to \"dont mind my accent\"!\n");
	print("Hello to my os\n");
	print("Test\n");
	print("Never gonna give up\nNever gonna run around and desert you!");
	print("Hell Kernel World!");
}
