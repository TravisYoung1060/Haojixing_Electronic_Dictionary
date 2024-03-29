/*
 * Created by FallenGemini on 2022/7/13.
 * 管理员功能声明
*/

#ifndef HAOJIXING_ELECTRONIC_DICTIONARY_ADMIN_H
#define HAOJIXING_ELECTRONIC_DICTIONARY_ADMIN_H


#include <stdio.h>
#include <string.h>
#include "List.h"

/*!
 * 管理员输入需要增添的单词、词性与中文释义,向链表中增加一个单词
 * @param dlList 链表头结点
 * @param En 英文单词
 * @param attribute 词性
 * @param Cn 中文释义
 */
void Add(DoublyLinkList * dlList, char* En, char* attribute, char* Cn);

/*!
 * 管理员输入需要删除的单词，文件中对应的单词将被删除，若输入不存在的单词将会报错
 * @param dlList 链表头结点
 * @param En 英文单词
 * @param attribute 词性
 * @param Cn 中文释义
 */
void Delete(DoublyLinkList * dlList, char* En, char* attribute, char* Cn);

/*!
 * 管理员输入需要修改单词的下标，以及修改后的单词、词性、中文。若输入不存在的单词将会报错
 * @param dlList 链表头结点
 * @param pos 待修改单词的下标
 * @param En 英文单词
 * @param attribute 词性
 * @param Cn 中文释义
 */
void Modify(DoublyLinkList * dlList, int pos, char* En, char* attribute, char* Cn);

#endif //HAOJIXING_ELECTRONIC_DICTIONARY_ADMIN_H