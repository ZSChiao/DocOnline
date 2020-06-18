# 简介

> :pencil: 此文档是我的英语学习笔记。

- ✅仓库地址：[Github](https://github.com/ZSChiao/English-Notes)
- 支持 Katex 公式

$$
\begin{array}{l}
W(A)=W(A)-\sum_{j=1}^{k} \operatorname{diff}\left(A, R, H_{j}\right) /(m k) \\
\quad+\sum_{c y \operatorname{cass}(R)}\left[\frac{p(C)}{1-p(C \operatorname{lass}(R))} \sum_{j=1}^{k} \operatorname{diff}\left(A, R, M_{j}(C)\right)\right] /(m k)
\end{array}
$$

- Gitalk 评论系统

```html
<link rel="stylesheet" href="//unpkg.com/gitalk/dist/gitalk.css">

<script src="//unpkg.com/docsify/lib/plugins/gitalk.min.js"></script>
<script src="//unpkg.com/gitalk/dist/gitalk.min.js"></script>
<script>
  const gitalk = new Gitalk({
    clientID: '刚刚申请下来的ID',
    clientSecret: '刚刚申请下来的密码',
    repo:'仓库名字，用于保存你博客评论的仓库，可以和你的博客是一个仓库',
    owner:你的Github名字,
    admin: ['你的Github名字和其他管理员的名字'],
    // facebook-like distraction free mode
    distractionFreeMode: false
  })
</script>
```

