/*	$OpenBSD$	*/

struct pty {
	struct {
		char	storage[1024];
		size_t	len;
	} buf;
	int	master;
	int	slave;
};

int	pty_open(struct pty *);
void	pty_close(struct pty *);
int	pty_detach(struct pty *);
int	pty_attach(struct pty *);
int	pty_drain(struct pty *pty);

static inline char *
pty_buffer(struct pty *pty)
{
	return pty->buf.storage;
}
