polyPointer* qetNode(void) {
	polyPointer* node;
	if (avail) {
		node = avail;
		avail = avail->link;
	}
	else
		node = (polyPointer*)malloc(sizeof(polyPointer));
	return node;
}

void retNode(polyPointer* ptr) {
	ptr->link = avail;
	avail = ptr;
}

void cerase(polyPointer* ptr) {
	polyPointer* temp;
	if (ptr) {
		temp = ptr->link;
		ptr->link = avail;
		avail = temp;
		ptr = NULL;
	}
}