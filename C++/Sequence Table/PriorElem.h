status PriorElem(SqList L, ElemType e, ElemType &pre)
// 如果线性表L存在，获取线性表L中元素e的前驱，保存在pre中，返回OK；如果没有前驱，返回ERROR；如果线性表L不存在，返回INFEASIBLE。
{
    // 请在这里补充代码，完成本关任务
    /********** Begin *********/
    int temp;
    if (L.elem == NULL)
        return -1;
    else
    {
        for (int i = 0; i < L.length; i++)
        {
            if (L.elem[i] == e && i > 0)
            {
                pre = L.elem[i - 1];
                return 1;
            }
        }
        return 0;
    }
    /********** End **********/
}
