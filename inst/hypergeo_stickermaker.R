library("hypergeo")
library("hexSticker")

bmp(file="hypergeo_icon.bmp",bg="#7733FF",width=2000,height=2000)
x <- seq(from= 0,to=2,len=300)
y <- seq(from=-1,to=1,len=300)
z <- outer(x,1i*y,`+`)
f <- hypergeo(1/2,2/5,2/3,z)
f1 <- limit(f)
jj <- seq(from=-2,to=2,len=22)
contour(x,y,Re(f1),asp=1,lwd=20,drawlabels=FALSE,levels=jj)
contour(x,y,Im(f),asp=1,lwd=20,drawlabels=FALSE,lty=2,add=TRUE,levels=jj)
segments(1,0,2,0,lwd=40)
dev.off()

sticker("hypergeo_icon.bmp", package="hypergeo", p_size=18, s_x=0.975, s_y=1,
        s_width=1.3,asp=0.85, white_around_sticker=TRUE, h_fill="#7733FF",
        h_color="#000000", filename="hypergeo.png")

