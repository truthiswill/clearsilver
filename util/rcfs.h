
#ifndef __RCFS_H_
#define __RCFS_H_ 1

typedef struct _rcfs RCFS;

NEOERR * rcfs_init (RCFS **rcfs);
NEOERR * rcfs_destroy (RCFS **rcfs);

NEOERR * rcfs_load (char *path, int version, char **data);
NEOERR * rcfs_save (char *path, char *data, char *user, char *log);
NEOERR * rcfs_lock (char *path, int *lock);
void rcfs_unlock (int lock);
NEOERR * rcfs_meta_load (char *path, HDF **meta);
NEOERR * rcfs_meta_save (char *path, HDF *meta);
NEOERR * rcfs_listdir (char *path, ULIST **list);
NEOERR * rcfs_link (char *src_path, char *dest_path);
NEOERR * rcfs_unlink (char *path);

#endif /* __RCFS_H_ */