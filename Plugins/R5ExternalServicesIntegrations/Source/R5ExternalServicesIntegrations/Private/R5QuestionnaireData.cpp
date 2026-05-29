#include "R5QuestionnaireData.h"

UR5QuestionnaireData::UR5QuestionnaireData() {
    this->CWFSQuestionnaireURLConfig = TEXT("https://survey.alchemer.eu/s3/90856094/CW-FS?accid={accid}");
    this->CWQSQuestionnaireURLConfig = TEXT("https://survey.alchemer.eu/s3/90856095/CW-QS?accid={accid}");
    this->bHideQuestionnaireAfterComplete = false;
}


