int realignread_LR(struct alignedread *read, REFLIST *reflist, struct bamINDEL *bam_indel, int var, struct REALIGNMENT *rl);
int realignread_RL(struct alignedread *read, REFLIST *reflist, struct bamINDEL *bam_indel, int var, struct REALIGNMENT *rl);
int realign_read(struct BAMFILE_data *bamfiles_data, int sample, struct alignedread *bcall, REFLIST *reflist);
