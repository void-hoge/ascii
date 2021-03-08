#include <stdio.h>

void show_binary(const unsigned char c) {
	printf("0b");
	for (unsigned char i = 1<<7; i != 0; i>>=1) {
		printf("%c", (c&i)?'1':'0');
	}
	printf("\n");
}

int main(const int argc, const char *argv[]) {
	switch (argc) {
		case 1: {
			char lower[] = "lower";
			char upper[] = "upper";
			char *p = lower;
			printf("              ");
			while (*p) {
				printf("%c   ", *p);
				p++;
			}
			printf("\n      ");
			for (int i = 0; i < 16; i++) {
				printf("%1x ", i);
			}
			putchar('\n');
			printf("    +--------------------------------\n");
			p = upper;
			for (char i = 2; i < 8; i++) { //upper 4bits
				if (!*p) {
					printf("   ");
				}else{
					printf("%c  ", *p);
					p++;
				}
				printf("%x| ", i);
				for (char j = 0; j < 16; j++) { // lower 4bits
					printf("%c ", (i<<4)|j);
				}
				putchar('\n');
			}
			break;
		}
		case 2: {
			printf("%c %d 0x%x ", *argv[1], (int)*argv[1], (int)*argv[1]);
			show_binary(*argv[1]);
			break;
		}
		default: {
			printf("too many arguments\n");
			return 1;
		}
	}
	return 0;
}
