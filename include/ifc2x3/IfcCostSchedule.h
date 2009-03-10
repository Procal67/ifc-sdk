/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCCOSTSCHEDULE_H
#define IFC2X3_IFCCOSTSCHEDULE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include "ifc2x3/IfcControl.h"
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcActorSelect;
    class IfcDateTimeSelect;

    /**
     */
    class IFC2X3_DLL_DEF IfcCostSchedule : public IfcControl {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'SubmittedBy'.
         * 
         */
        virtual IfcActorSelect *getSubmittedBy();
        /**
         * (const) Returns the value of the explicit attribute 'SubmittedBy'.
         * 
         * @return the value of the explicit attribute 'SubmittedBy'
         */
        virtual const IfcActorSelect *getSubmittedBy() const;
        /**
         * Sets the value of the explicit attribute 'SubmittedBy'.
         * 
         * @param value
         */
        virtual void setSubmittedBy(const Step::RefPtr< IfcActorSelect > &value);
        /**
         * Gets the value of the explicit attribute 'PreparedBy'.
         * 
         */
        virtual IfcActorSelect *getPreparedBy();
        /**
         * (const) Returns the value of the explicit attribute 'PreparedBy'.
         * 
         * @return the value of the explicit attribute 'PreparedBy'
         */
        virtual const IfcActorSelect *getPreparedBy() const;
        /**
         * Sets the value of the explicit attribute 'PreparedBy'.
         * 
         * @param value
         */
        virtual void setPreparedBy(const Step::RefPtr< IfcActorSelect > &value);
        /**
         * Gets the value of the explicit attribute 'SubmittedOn'.
         * 
         */
        virtual IfcDateTimeSelect *getSubmittedOn();
        /**
         * (const) Returns the value of the explicit attribute 'SubmittedOn'.
         * 
         * @return the value of the explicit attribute 'SubmittedOn'
         */
        virtual const IfcDateTimeSelect *getSubmittedOn() const;
        /**
         * Sets the value of the explicit attribute 'SubmittedOn'.
         * 
         * @param value
         */
        virtual void setSubmittedOn(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         * Gets the value of the explicit attribute 'Status'.
         * 
         */
        virtual IfcLabel getStatus();
        /**
         * (const) Returns the value of the explicit attribute 'Status'.
         * 
         * @return the value of the explicit attribute 'Status'
         */
        virtual const IfcLabel getStatus() const;
        /**
         * Sets the value of the explicit attribute 'Status'.
         * 
         * @param value
         */
        virtual void setStatus(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'TargetUsers'.
         * 
         */
        virtual Set_IfcActorSelect_1_n &getTargetUsers();
        /**
         * (const) Returns the value of the explicit attribute 'TargetUsers'.
         * 
         * @return the value of the explicit attribute 'TargetUsers'
         */
        virtual const Set_IfcActorSelect_1_n &getTargetUsers() const;
        /**
         * Sets the value of the explicit attribute 'TargetUsers'.
         * 
         * @param value
         */
        virtual void setTargetUsers(const Set_IfcActorSelect_1_n &value);
        /**
         * Gets the value of the explicit attribute 'UpdateDate'.
         * 
         */
        virtual IfcDateTimeSelect *getUpdateDate();
        /**
         * (const) Returns the value of the explicit attribute 'UpdateDate'.
         * 
         * @return the value of the explicit attribute 'UpdateDate'
         */
        virtual const IfcDateTimeSelect *getUpdateDate() const;
        /**
         * Sets the value of the explicit attribute 'UpdateDate'.
         * 
         * @param value
         */
        virtual void setUpdateDate(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         * Gets the value of the explicit attribute 'ID'.
         * 
         */
        virtual IfcIdentifier getID();
        /**
         * (const) Returns the value of the explicit attribute 'ID'.
         * 
         * @return the value of the explicit attribute 'ID'
         */
        virtual const IfcIdentifier getID() const;
        /**
         * Sets the value of the explicit attribute 'ID'.
         * 
         * @param value
         */
        virtual void setID(const IfcIdentifier &value);
        /**
         * Gets the value of the explicit attribute 'PredefinedType'.
         * 
         */
        virtual IfcCostScheduleTypeEnum getPredefinedType();
        /**
         * (const) Returns the value of the explicit attribute 'PredefinedType'.
         * 
         * @return the value of the explicit attribute 'PredefinedType'
         */
        virtual const IfcCostScheduleTypeEnum getPredefinedType() const;
        /**
         * Sets the value of the explicit attribute 'PredefinedType'.
         * 
         * @param value
         */
        virtual void setPredefinedType(IfcCostScheduleTypeEnum value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcCostSchedule(Step::Id id, Step::SPFData *args);
        virtual ~IfcCostSchedule();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCostSchedule &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcActorSelect > m_submittedBy;
        /**
         */
        Step::RefPtr< IfcActorSelect > m_preparedBy;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_submittedOn;
        /**
         */
        Step::String m_status;
        /**
         */
        Set_IfcActorSelect_1_n m_targetUsers;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_updateDate;
        /**
         */
        Step::String m_iD;
        /**
         */
        IfcCostScheduleTypeEnum m_predefinedType;

    };

}

#endif // IFC2X3_IFCCOSTSCHEDULE_H
