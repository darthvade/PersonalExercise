#ifndef __RIO_H__
#define __RIO_H__

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

#define RIO_BUFSIZE 8192

typedef struct {
	int rio_fd; //内部缓冲区对应的文件描述符
	int rio_cnt; //内部缓冲区中没有被读取的字节数
	char *rio_bufptr; //指向内部缓冲区中没有被读取的第一个字节
	char rio_buf[RIO_BUFSIZE]; //内部缓冲区
} rio_t;

ssize_t rio_readn(int fd, void *usrbuf, size_t n);

ssize_t rio_writen(int fd, void *usrbuf, size_t n);

void rio_readinitb(rio_t *rp, int fd);

ssize_t rio_readlineb(rio_t *rp, void *usrbuf, size_t maxlen);

ssize_t rio_readnb(rio_t *rp, void *usrbuf, size_t n);

#endif
