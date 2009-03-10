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

#ifndef IFC2X3_IFCWORKCONTROL_H
#define IFC2X3_IFCWORKCONTROL_H
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
    class IfcDateTimeSelect;

    /**
     */
    class IFC2X3_DLL_DEF IfcWorkControl : public IfcControl {
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
         * Gets the value of the explicit attribute 'Identifier'.
         * 
         */
        virtual IfcIdentifier getIdentifier();
        /**
         * (const) Returns the value of the explicit attribute 'Identifier'.
         * 
         * @return the value of the explicit attribute 'Identifier'
         */
        virtual const IfcIdentifier getIdentifier() const;
        /**
         * Sets the value of the explicit attribute 'Identifier'.
         * 
         * @param value
         */
        virtual void setIdentifier(const IfcIdentifier &value);
        /**
         * Gets the value of the explicit attribute 'CreationDate'.
         * 
         */
        virtual IfcDateTimeSelect *getCreationDate();
        /**
         * (const) Returns the value of the explicit attribute 'CreationDate'.
         * 
         * @return the value of the explicit attribute 'CreationDate'
         */
        virtual const IfcDateTimeSelect *getCreationDate() const;
        /**
         * Sets the value of the explicit attribute 'CreationDate'.
         * 
         * @param value
         */
        virtual void setCreationDate(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         * Gets the value of the explicit attribute 'Creators'.
         * 
         */
        virtual Set_IfcPerson_1_n &getCreators();
        /**
         * (const) Returns the value of the explicit attribute 'Creators'.
         * 
         * @return the value of the explicit attribute 'Creators'
         */
        virtual const Set_IfcPerson_1_n &getCreators() const;
        /**
         * Sets the value of the explicit attribute 'Creators'.
         * 
         * @param value
         */
        virtual void setCreators(const Set_IfcPerson_1_n &value);
        /**
         * Gets the value of the explicit attribute 'Purpose'.
         * 
         */
        virtual IfcLabel getPurpose();
        /**
         * (const) Returns the value of the explicit attribute 'Purpose'.
         * 
         * @return the value of the explicit attribute 'Purpose'
         */
        virtual const IfcLabel getPurpose() const;
        /**
         * Sets the value of the explicit attribute 'Purpose'.
         * 
         * @param value
         */
        virtual void setPurpose(const IfcLabel &value);
        /**
         * Gets the value of the explicit attribute 'Duration'.
         * 
         */
        virtual IfcTimeMeasure getDuration();
        /**
         * (const) Returns the value of the explicit attribute 'Duration'.
         * 
         * @return the value of the explicit attribute 'Duration'
         */
        virtual const IfcTimeMeasure getDuration() const;
        /**
         * Sets the value of the explicit attribute 'Duration'.
         * 
         * @param value
         */
        virtual void setDuration(IfcTimeMeasure value);
        /**
         * Gets the value of the explicit attribute 'TotalFloat'.
         * 
         */
        virtual IfcTimeMeasure getTotalFloat();
        /**
         * (const) Returns the value of the explicit attribute 'TotalFloat'.
         * 
         * @return the value of the explicit attribute 'TotalFloat'
         */
        virtual const IfcTimeMeasure getTotalFloat() const;
        /**
         * Sets the value of the explicit attribute 'TotalFloat'.
         * 
         * @param value
         */
        virtual void setTotalFloat(IfcTimeMeasure value);
        /**
         * Gets the value of the explicit attribute 'StartTime'.
         * 
         */
        virtual IfcDateTimeSelect *getStartTime();
        /**
         * (const) Returns the value of the explicit attribute 'StartTime'.
         * 
         * @return the value of the explicit attribute 'StartTime'
         */
        virtual const IfcDateTimeSelect *getStartTime() const;
        /**
         * Sets the value of the explicit attribute 'StartTime'.
         * 
         * @param value
         */
        virtual void setStartTime(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         * Gets the value of the explicit attribute 'FinishTime'.
         * 
         */
        virtual IfcDateTimeSelect *getFinishTime();
        /**
         * (const) Returns the value of the explicit attribute 'FinishTime'.
         * 
         * @return the value of the explicit attribute 'FinishTime'
         */
        virtual const IfcDateTimeSelect *getFinishTime() const;
        /**
         * Sets the value of the explicit attribute 'FinishTime'.
         * 
         * @param value
         */
        virtual void setFinishTime(const Step::RefPtr< IfcDateTimeSelect > &value);
        /**
         * Gets the value of the explicit attribute 'WorkControlType'.
         * 
         */
        virtual IfcWorkControlTypeEnum getWorkControlType();
        /**
         * (const) Returns the value of the explicit attribute 'WorkControlType'.
         * 
         * @return the value of the explicit attribute 'WorkControlType'
         */
        virtual const IfcWorkControlTypeEnum getWorkControlType() const;
        /**
         * Sets the value of the explicit attribute 'WorkControlType'.
         * 
         * @param value
         */
        virtual void setWorkControlType(IfcWorkControlTypeEnum value);
        /**
         * Gets the value of the explicit attribute 'UserDefinedControlType'.
         * 
         */
        virtual IfcLabel getUserDefinedControlType();
        /**
         * (const) Returns the value of the explicit attribute 'UserDefinedControlType'.
         * 
         * @return the value of the explicit attribute 'UserDefinedControlType'
         */
        virtual const IfcLabel getUserDefinedControlType() const;
        /**
         * Sets the value of the explicit attribute 'UserDefinedControlType'.
         * 
         * @param value
         */
        virtual void setUserDefinedControlType(const IfcLabel &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcWorkControl(Step::Id id, Step::SPFData *args);
        virtual ~IfcWorkControl();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcWorkControl &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::String m_identifier;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_creationDate;
        /**
         */
        Set_IfcPerson_1_n m_creators;
        /**
         */
        Step::String m_purpose;
        /**
         */
        Step::Real m_duration;
        /**
         */
        Step::Real m_totalFloat;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_startTime;
        /**
         */
        Step::RefPtr< IfcDateTimeSelect > m_finishTime;
        /**
         */
        IfcWorkControlTypeEnum m_workControlType;
        /**
         */
        Step::String m_userDefinedControlType;

    };

}

#endif // IFC2X3_IFCWORKCONTROL_H
