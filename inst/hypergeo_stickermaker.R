library("hypergeo")
library("elliptic")
library("hexSticker")

png(file="hypergeo_icon.png",width=1000,height=1000,bg="transparent")

x <- seq(from= 0,to=2,len=300)
y <- seq(from=-1,to=1,len=300)
z <- outer(x,1i*y,`+`)
view(x,y,limit(hypergeo(1/2,2/5,2/3,z)),lwd=4,axes=FALSE,xlab='',ylab='',scheme=-1,drawlabels=FALSE)
dev.off()

sticker("hypergeo_icon.png", package="hypergeo", p_size=8, s_x=0.975, s_y=0.8,
        s_width=1.1,asp=0.85, white_around_sticker=TRUE, h_fill="#7733FF",
        h_color="#000000", filename="hypergeo.png")

